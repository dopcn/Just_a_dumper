//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseRequestModel.h"

@class NSString;

@interface CCB_I_SJ5007 : CCBBaseRequestModel
{
    NSString *_USERID;
    NSString *_BRANCHID;
    NSString *_V_TXCODE;
    NSString *_SIGNDATA;
    NSString *_Svc_ID;
    NSString *_Cst_ID;
}

+ (id)SJ5007RequestVerifyTxcode:(id)arg1 withSignData:(id)arg2;
@property(copy, nonatomic) NSString *Cst_ID; // @synthesize Cst_ID=_Cst_ID;
@property(copy, nonatomic) NSString *Svc_ID; // @synthesize Svc_ID=_Svc_ID;
@property(copy, nonatomic) NSString *SIGNDATA; // @synthesize SIGNDATA=_SIGNDATA;
@property(copy, nonatomic) NSString *V_TXCODE; // @synthesize V_TXCODE=_V_TXCODE;
@property(copy, nonatomic) NSString *BRANCHID; // @synthesize BRANCHID=_BRANCHID;
@property(copy, nonatomic) NSString *USERID; // @synthesize USERID=_USERID;
- (void).cxx_destruct;

@end

