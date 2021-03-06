//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, RCTBridge, UIAlertController, UIImagePickerController;
@protocol OS_dispatch_queue;

@interface RNImagePickerManager : NSObject <RCTBridgeModule, UINavigationControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate>
{
    UIAlertController *_alertController;
    UIImagePickerController *_picker;
    CDUnknownBlockType _callback;
    NSDictionary *_defaultOptions;
    NSMutableDictionary *_options;
    NSDictionary *_customButtons;
}

+ (const struct RCTMethodInfo *)__rct_export__1413;
+ (const struct RCTMethodInfo *)__rct_export__1352;
+ (const struct RCTMethodInfo *)__rct_export__571;
+ (const struct RCTMethodInfo *)__rct_export__510;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) NSDictionary *customButtons; // @synthesize customButtons=_customButtons;
@property(retain, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSDictionary *defaultOptions; // @synthesize defaultOptions=_defaultOptions;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UIImagePickerController *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void).cxx_destruct;
- (_Bool)addSkipBackupAttributeToItemAtPath:(id)arg1;
- (id)fixOrientation:(id)arg1;
- (id)downscaleImageIfNecessary:(id)arg1 maxWidth:(float)arg2 maxHeight:(float)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)launchImagePicker:(long long)arg1;
- (void)launchImagePicker:(long long)arg1 options:(id)arg2;
- (void)actionHandler:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)launchImageLibrary:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)launchCameraV2:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)launchCamera:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

