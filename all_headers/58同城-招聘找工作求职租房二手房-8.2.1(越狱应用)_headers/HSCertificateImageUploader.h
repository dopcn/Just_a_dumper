//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HSCertificateImageUploader : NSObject
{
    NSString *_currentValidUpLoadID;
}

@property(copy, nonatomic) NSString *currentValidUpLoadID; // @synthesize currentValidUpLoadID=_currentValidUpLoadID;
- (void).cxx_destruct;
- (void)cancelFormerUpload;
- (void)uploadCertificateImage:(id)arg1 targetSize:(struct CGSize)arg2 infoID:(id)arg3 viewType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;

@end

