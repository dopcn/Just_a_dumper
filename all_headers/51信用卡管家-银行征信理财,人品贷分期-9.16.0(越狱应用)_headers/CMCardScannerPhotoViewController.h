//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMCardScannerViewController.h"

@class AVCaptureStillImageOutput;

@interface CMCardScannerPhotoViewController : CMCardScannerViewController
{
    AVCaptureStillImageOutput *_imageOutPut;
    long long _retryCount;
}

@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) AVCaptureStillImageOutput *imageOutPut; // @synthesize imageOutPut=_imageOutPut;
- (void).cxx_destruct;
- (void)takePhoto:(id)arg1;
- (void)initCustomCaptureSession;
- (void)viewDidLoad;

@end

