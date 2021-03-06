//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSDictionary, NSString, ShareOrderAfterCommentVoucherModel;

@interface ShareOrderAfterCommentModel : JDModel
{
    NSString *_commentId;
    NSString *_content;
    NSString *_score;
    NSString *_productId;
    NSString *_orderId;
    NSArray *_picInfoList;
    NSString *_addCommentMessage;
    NSString *_noCommentMessage;
    NSString *_addCommentTitle;
    NSString *_voiceSwitch;
    NSString *_shareContent;
    NSDictionary *_commentWareInfo;
    ShareOrderAfterCommentVoucherModel *_voucherInfo;
}

@property(retain, nonatomic) ShareOrderAfterCommentVoucherModel *voucherInfo; // @synthesize voucherInfo=_voucherInfo;
@property(retain, nonatomic) NSDictionary *commentWareInfo; // @synthesize commentWareInfo=_commentWareInfo;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
@property(copy, nonatomic) NSString *addCommentTitle; // @synthesize addCommentTitle=_addCommentTitle;
@property(copy, nonatomic) NSString *noCommentMessage; // @synthesize noCommentMessage=_noCommentMessage;
@property(copy, nonatomic) NSString *addCommentMessage; // @synthesize addCommentMessage=_addCommentMessage;
@property(retain, nonatomic) NSArray *picInfoList; // @synthesize picInfoList=_picInfoList;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

