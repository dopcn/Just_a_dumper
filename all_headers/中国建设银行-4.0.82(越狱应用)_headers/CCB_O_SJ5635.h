//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseModel.h"

@class NSArray, NSString;

@interface CCB_O_SJ5635 : CCBBaseModel
{
    NSString *_DbCrd_CardNo;
    NSString *_CrdHldr_Nm;
    NSString *_CrdHldr_Crdt_Tp;
    NSString *_CrdHldr_Crdt_No;
    NSString *_DbCrd_Prim_AccNo;
    NSString *_Vld_Rcrd_Cnt;
    NSArray *_LMT_GRP;
}

+ (id)mj_objectClassInArray;
@property(copy, nonatomic) NSArray *LMT_GRP; // @synthesize LMT_GRP=_LMT_GRP;
@property(copy, nonatomic) NSString *Vld_Rcrd_Cnt; // @synthesize Vld_Rcrd_Cnt=_Vld_Rcrd_Cnt;
@property(copy, nonatomic) NSString *DbCrd_Prim_AccNo; // @synthesize DbCrd_Prim_AccNo=_DbCrd_Prim_AccNo;
@property(copy, nonatomic) NSString *CrdHldr_Crdt_No; // @synthesize CrdHldr_Crdt_No=_CrdHldr_Crdt_No;
@property(copy, nonatomic) NSString *CrdHldr_Crdt_Tp; // @synthesize CrdHldr_Crdt_Tp=_CrdHldr_Crdt_Tp;
@property(copy, nonatomic) NSString *CrdHldr_Nm; // @synthesize CrdHldr_Nm=_CrdHldr_Nm;
@property(copy, nonatomic) NSString *DbCrd_CardNo; // @synthesize DbCrd_CardNo=_DbCrd_CardNo;
- (void).cxx_destruct;

@end

