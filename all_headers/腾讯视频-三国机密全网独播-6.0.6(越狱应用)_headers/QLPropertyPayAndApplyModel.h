//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSDictionary, NSString, QLASIHTTPRequest, QLJCELiveGiftItem;

@interface QLPropertyPayAndApplyModel : QLRequestModel
{
    NSString *_propsDataKey;
    long long _requestType;
    NSString *_productId;
    long long _productNum;
    long long _idType;
    NSString *_acotrId;
    long long _model;
    long long _propertyPayAndApplyResult;
    NSString *_msg;
    QLJCELiveGiftItem *_giftItem;
    long long _rank;
    NSDictionary *_userInfo;
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) QLJCELiveGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long propertyPayAndApplyResult; // @synthesize propertyPayAndApplyResult=_propertyPayAndApplyResult;
@property(nonatomic) long long model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *acotrId; // @synthesize acotrId=_acotrId;
@property(nonatomic) long long idType; // @synthesize idType=_idType;
@property(nonatomic) long long productNum; // @synthesize productNum=_productNum;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *propsDataKey; // @synthesize propsDataKey=_propsDataKey;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)dealWithResponse:(id)arg1 resp:(id)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)cancel;
- (void)cancelDataRequest;
- (void)dealloc;
- (id)init;

@end

