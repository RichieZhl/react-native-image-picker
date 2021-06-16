#import <UIKit/UIKit.h>
#import <PhotosUI/PhotosUI.h>

typedef NS_ENUM(NSInteger, RNImagePickerTarget) {
  camera = 1,
  library
};

@protocol RCTBridgeModule;

@interface ImagePickerManager : NSObject <RCTBridgeModule, UINavigationControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

@end
