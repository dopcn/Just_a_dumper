//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol WVCameraImageUploadProtocol;

@interface WVCameraImageUploadService : NSObject
{
    id <WVCameraImageUploadProtocol> _imageUploadHandler;
}

+ (id)registeredImageUploadHandler;
+ (void)registerImageUploadHandler:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) id <WVCameraImageUploadProtocol> imageUploadHandler; // @synthesize imageUploadHandler=_imageUploadHandler;
- (void).cxx_destruct;

@end

