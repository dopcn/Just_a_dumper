//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KFileDownloadViewDelegate-Protocol.h"

@class KFileDownloadView, KWLocalQingInfo, NSString, UIProgressView, UIView;

@interface KWDownloadProgressViewHD : NSObject <KFileDownloadViewDelegate>
{
    UIProgressView *_progressView;
    KFileDownloadView *_downloadView;
    UIView *_backgroundView;
    KWLocalQingInfo *_localQingInfo;
    CDUnknownBlockType _cancelBlock;
}

+ (id)progressViewWithQingInfo:(id)arg1 toView:(id)arg2;
+ (id)shareDownloadProgressViewWithQingInfo:(id)arg1;
+ (id)downloadProgressViewWithQingInfo:(id)arg1;
+ (id)progressViewWithTitle:(id)arg1 name:(id)arg2 size:(long long)arg3 cancel:(CDUnknownBlockType)arg4;
+ (id)progressViewWithTitle:(id)arg1 name:(id)arg2 size:(id)arg3 modify:(id)arg4 cancel:(CDUnknownBlockType)arg5;
+ (id)stringWithSize:(long long)arg1;
+ (struct CGRect)viewFrame;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) KWLocalQingInfo *localQingInfo; // @synthesize localQingInfo=_localQingInfo;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) KFileDownloadView *downloadView; // @synthesize downloadView=_downloadView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAction:(id)arg1;
- (void)doCancelDownload;
- (_Bool)isDownloading;
- (void)showInView:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)hide;
- (void)setCancelEnabled:(_Bool)arg1;
- (void)setProgress:(double)arg1;
- (void)showInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

