//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBModel.h"

@class NSArray, NSString;

@interface JDPTdPayResultDataModel : CBModel
{
    _Bool _isOpen;
    _Bool _switchShouldCheck;
    _Bool _closeShouldCheck;
    NSString *_openSmallFreeId;
    NSArray *_smallFreeInfoArray;
    NSString *_checkType;
    NSString *_protocolUrl;
    NSString *_modifyPcPwdUrl;
    NSString *_modifyPwdUrl;
    NSString *_bizTokenKey;
    NSString *_nextStep;
    NSString *_remark;
}

@property(nonatomic) _Bool closeShouldCheck; // @synthesize closeShouldCheck=_closeShouldCheck;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *nextStep; // @synthesize nextStep=_nextStep;
@property(copy, nonatomic) NSString *bizTokenKey; // @synthesize bizTokenKey=_bizTokenKey;
@property(copy, nonatomic) NSString *modifyPwdUrl; // @synthesize modifyPwdUrl=_modifyPwdUrl;
@property(copy, nonatomic) NSString *modifyPcPwdUrl; // @synthesize modifyPcPwdUrl=_modifyPcPwdUrl;
@property(copy, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(copy, nonatomic) NSString *checkType; // @synthesize checkType=_checkType;
@property(nonatomic) _Bool switchShouldCheck; // @synthesize switchShouldCheck=_switchShouldCheck;
@property(copy, nonatomic) NSArray *smallFreeInfoArray; // @synthesize smallFreeInfoArray=_smallFreeInfoArray;
@property(copy, nonatomic) NSString *openSmallFreeId; // @synthesize openSmallFreeId=_openSmallFreeId;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
- (void).cxx_destruct;
- (id)defaultSmallFreeInfoModelWithIdentifier:(id)arg1;
- (id)defaultSmallFreeInfoModel;

@end

