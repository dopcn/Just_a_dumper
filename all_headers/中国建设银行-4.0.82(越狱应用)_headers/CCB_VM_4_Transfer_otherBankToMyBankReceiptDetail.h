//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class NSMutableArray;

@interface CCB_VM_4_Transfer_otherBankToMyBankReceiptDetail : CCBBaseFormViewModel
{
    NSMutableArray *_allItemsArray;
    NSMutableArray *_leftArrayFirst;
    NSMutableArray *_leftArraySecond;
    NSMutableArray *_leftArrayThird;
    NSMutableArray *_sectionTitleArray;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *sectionTitleArray; // @synthesize sectionTitleArray=_sectionTitleArray;
@property(retain, nonatomic) NSMutableArray *leftArrayThird; // @synthesize leftArrayThird=_leftArrayThird;
@property(retain, nonatomic) NSMutableArray *leftArraySecond; // @synthesize leftArraySecond=_leftArraySecond;
@property(retain, nonatomic) NSMutableArray *leftArrayFirst; // @synthesize leftArrayFirst=_leftArrayFirst;
@property(retain, nonatomic) NSMutableArray *allItemsArray; // @synthesize allItemsArray=_allItemsArray;
- (void).cxx_destruct;
- (void)createItems;
- (id)init;

@end

