source 'git@git.musjoy.com:PodSpecs.git'
source 'https://github.com/CocoaPods/Specs.git'
inhibit_all_warnings!
platform :ios, '10.0'


target 'Test_PhoneCall' do
  # Uncomment the next line if you're using Swift or would like to use dynamic frameworks
  # use_frameworks!

  # Pods for Test_PhoneCall

    pod 'ModuleCapability'          # 常用模块的宏定义
    # 控制器相关
    pod 'MJControllerManager'       # 控制器管理
    pod 'MJTabBarManager'           # TabBar控制器基类
    pod 'MJWebViewController'       # 网页控制器
    # 通用视图
    pod 'MJAlertManager'            # 通用弹框
    pod 'MJToast'                   # 自动消失的提示框
    pod 'MJLoadingView'             # Loading视图
    # 网络请求
    pod 'MJInterfaceManager'        # 设备注册请求
    pod 'WebInterface'              # 与自己服务器交互的网络请求
    pod 'MJWebService'              # 通用网络请求
    pod 'MJIAPManager'              # app内购请求
    pod 'MJPushManager'             # 注册自己服务器的推送
    # 后台更新文件管理
    pod 'MJAppCapability'           # app通用控制参数管理
    pod 'FileSource'                # 本地文件更新管理
    pod 'MJPlistViewController'     # 通过Plist生成列表控制器
    pod 'MJKeyManager'              # 后台管理所有第三方key
    # 常用模块
    pod 'LaunchManager'             # 启动时, 方法延时执行, 加快启动速度
    pod 'MJLocalize'                # 国际化
    pod 'MJUtils'                   # 常用类类目（工具类）
    pod 'MJTimeManager'             # 服务器时间
    pod 'MJCacheManager'            # 缓存管理
    pod 'MJDevice'                  # 设备信息
    pod 'MJKeychain'                # keychain存储
    pod 'DBModel'       # 数据解析, 存储
    # 广告 & 推广
    pod 'MJAdManager/AdapterAdMob'  # 广告模块
    pod 'PromotionManager'          # 推广模块

end


post_install do |installer_representation|
    
    # 读取项目名称
    firstAggregateTarget = installer_representation.aggregate_targets.first
    
    # 读取用户中多出来的宏定义
    the_user_config =  firstAggregateTarget.xcconfigs.first.last
    a_gcc_config = the_user_config.attributes['GCC_PREPROCESSOR_DEFINITIONS']
    the_gcc_config = a_gcc_config.split("COCOAPODS=1 ")[1]
    
    the_build_setting = {
        'GCC_PREPROCESSOR_DEFINITIONS' => the_gcc_config,
        'HEADER_SEARCH_PATHS' => "\"$(PROJECT_DIR)/../Public\""
    }
    
    # 将这些宏定义应用于其它target
    installer_representation.pod_targets.sort_by(&:name).each do |target|
        
        # 跳过没有不需要编译的target
        next if target.target_definitions.flat_map(&:dependencies).empty?
        next if !target.should_build?
        
        # 重新保存每个pod target
        path = target.xcconfig_path
        xcconfig_gen = Generator::XCConfig::PodXCConfig.new(target)
        xcconfig = xcconfig_gen.generate
        xcconfig.merge!(the_build_setting)
        xcconfig.save_as(path)
        
    end
    
end



