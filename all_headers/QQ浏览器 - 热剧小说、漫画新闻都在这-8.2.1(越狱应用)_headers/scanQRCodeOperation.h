//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MttQRCodeScanViewController;

@interface scanQRCodeOperation : NSOperation
{
    struct opaqueCMSampleBuffer *_sampleBuffer;
    MttQRCodeScanViewController *_scanController;
}

@property(retain, nonatomic) MttQRCodeScanViewController *scanController; // @synthesize scanController=_scanController;
- (void).cxx_destruct;
- (id)imageFromCropRect:(id)arg1;
- (void)main;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end

