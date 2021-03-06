//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class JDStoreNetwork, NSArray, NSDictionary, NSString, ShareOrderCommentWareInfoModel;
@protocol ShareOrderPublishOrderManagerDelegate;

@interface ShareOrderPublishOrderManager : NSObject <NSURLConnectionDataDelegate>
{
    _Bool _isLoading;
    _Bool _uploadFailed;
    id <ShareOrderPublishOrderManagerDelegate> _delegate;
    NSDictionary *_serviceParam;
    NSArray *_shieldArray;
    NSArray *_imageShieldList;
    JDStoreNetwork *_netWork;
    CDUnknownBlockType _block;
    ShareOrderCommentWareInfoModel *_wareModel;
}

@property(retain, nonatomic) ShareOrderCommentWareInfoModel *wareModel; // @synthesize wareModel=_wareModel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork=_netWork;
@property(nonatomic) _Bool uploadFailed; // @synthesize uploadFailed=_uploadFailed;
@property(retain, nonatomic) NSArray *imageShieldList; // @synthesize imageShieldList=_imageShieldList;
@property(retain, nonatomic) NSArray *shieldArray; // @synthesize shieldArray=_shieldArray;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSDictionary *serviceParam; // @synthesize serviceParam=_serviceParam;
@property(nonatomic) __weak id <ShareOrderPublishOrderManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)pubServiceComment:(id)arg1 withMessage:(id)arg2 shareGiftInfo:(id)arg3 successInfo:(id)arg4;
- (void)pubCommentContent;
- (void)pubComment;
- (void)getImageURL:(CDUnknownBlockType)arg1;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

