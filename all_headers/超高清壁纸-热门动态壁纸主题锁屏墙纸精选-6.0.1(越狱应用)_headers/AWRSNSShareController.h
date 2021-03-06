//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWRBaseHandlerDelegate-Protocol.h"
#import "AWRImageUploaderDelegate-Protocol.h"

@class AWRBaseHandler, AWRImageUploader, NSArray, NSString, UIImage;
@protocol AWRSNSShareControllerDelegate;

@interface AWRSNSShareController : NSObject <AWRBaseHandlerDelegate, AWRImageUploaderDelegate>
{
    id <AWRSNSShareControllerDelegate> _delegate;
    UIImage *_image;
    NSString *_snsType;
    NSString *_snsID;
    NSString *_content;
    NSString *_appid;
    NSArray *_imageInfos;
    AWRBaseHandler *_handler;
    AWRImageUploader *_uploader;
}

@property(retain, nonatomic) AWRImageUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) AWRBaseHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSArray *imageInfos; // @synthesize imageInfos=_imageInfos;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *snsID; // @synthesize snsID=_snsID;
@property(copy, nonatomic) NSString *snsType; // @synthesize snsType=_snsType;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) id <AWRSNSShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handler:(id)arg1 didSucceedLoadWithData:(id)arg2;
- (void)handler:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)imagesDidFinishUpload:(id)arg1;
- (void)share;
- (void)shareToSNS;
- (void)uploadImage;
- (id)initWithSNSType:(id)arg1 SNSID:(id)arg2 content:(id)arg3 appID:(id)arg4 delegate:(id)arg5;
- (id)initWithSNSType:(id)arg1 SNSID:(id)arg2 content:(id)arg3 image:(id)arg4 delegate:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

