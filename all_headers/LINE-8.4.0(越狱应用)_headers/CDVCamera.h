//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "UIPopoverControllerDelegate-Protocol.h"

@class CDVCameraPicker, CLLocationManager, NSData, NSMutableDictionary, NSString;

@interface CDVCamera : CDVPlugin <UIPopoverControllerDelegate>
{
    _Bool hasPendingOperation;
    CDVCameraPicker *pickerController;
    CLLocationManager *locationManager;
    NSMutableDictionary *_metadata;
    NSData *_data;
}

+ (void)initialize;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager;
@property(retain) CDVCameraPicker *pickerController; // @synthesize pickerController;
@property _Bool hasPendingOperation; // @synthesize hasPendingOperation;
- (void).cxx_destruct;
- (void)imagePickerControllerReturnImageResult;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)resultForVideo:(id)arg1;
- (void)resultForImage:(id)arg1 info:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)retrieveImage:(id)arg1 options:(id)arg2;
- (id)tempFilePath:(id)arg1;
- (id)processImage:(id)arg1 info:(id)arg2 options:(id)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)cleanup:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)displayPopover:(id)arg1;
- (long long)integerValueForKey:(id)arg1 key:(id)arg2 defaultValue:(long long)arg3;
- (void)repositionPopover:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)takePicture:(id)arg1;
- (_Bool)popoverSupported;
- (_Bool)usesGeolocation;
- (id)urlTransformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

