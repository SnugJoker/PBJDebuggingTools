#
# Be sure to run `pod lib lint PBJAnimations.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
s.name             = 'PBJDebuggingTools'
s.version          = '1.0.0'
s.summary          = 'Animations & transitions framework.'
s.description      = 'PBJDebuggingTools is a simple framework for adding animations in no time.'
s.homepage         = 'https://github.com/SnugJoker/PBJDebuggingTools'
s.license          = { :type => 'MIT', :file => 'LICENSE' }
s.author           = { 'josephrazon' => 'razonjoe@gmail.com' }
s.source           = { :git => 'https://github.com/SnugJoker/PBJDebuggingTools.git', :tag => s.version.to_s }

s.ios.deployment_target = '8.0'

s.source_files = 'PBJDebuggingTools/Classes/PBJDLog/*'
s.public_header_files = 'PBJDebuggingTools/Classes/PBJDLog/*.h'


end
