//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCB_O_SJGS10, NSString;

@interface CCB_7_VM_PhysicalGoldTradeBuyBack : CCBBaseFormViewModel
{
    NSString *_SJGS10_errorStr;
    CCB_O_SJGS10 *_SJGS10;
    CDUnknownBlockType _requestHoltProCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType requestHoltProCallBack; // @synthesize requestHoltProCallBack=_requestHoltProCallBack;
@property(retain, nonatomic) CCB_O_SJGS10 *SJGS10; // @synthesize SJGS10=_SJGS10;
@property(retain, nonatomic) NSString *SJGS10_errorStr; // @synthesize SJGS10_errorStr=_SJGS10_errorStr;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestSJGS10Trade:(CDUnknownBlockType)arg1 withPostDict:(id)arg2;
- (id)calculateTotalPro:(id)arg1;
- (id)calculateTotalItem:(id)arg1;
- (void)reloadLastProductDatas:(id)arg1;
- (id)init;

@end

