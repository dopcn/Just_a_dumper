//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTScanResultCallback, NSString;

@interface CTScanParamModel : NSObject
{
    _Bool _shouldShowConfirmView;
    int _scannerUI;
    int _defaultScannerType;
    NSString *_imageURL;
    NSString *_bizCode;
    CTScanResultCallback *_callback;
}

@property(retain, nonatomic) CTScanResultCallback *callback; // @synthesize callback=_callback;
@property(nonatomic) int defaultScannerType; // @synthesize defaultScannerType=_defaultScannerType;
@property(nonatomic) int scannerUI; // @synthesize scannerUI=_scannerUI;
@property(nonatomic) _Bool shouldShowConfirmView; // @synthesize shouldShowConfirmView=_shouldShowConfirmView;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)init;

@end

