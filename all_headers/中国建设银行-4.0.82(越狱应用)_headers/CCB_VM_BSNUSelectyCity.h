//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCB_4_VM_SelectObject.h"

@class NSArray, NSMutableArray, NSString;

@interface CCB_VM_BSNUSelectyCity : CCB_4_VM_SelectObject
{
    NSArray *_sections;
    NSArray *_sectionShortNames;
    NSArray *_allCitys;
    NSString *_strText;
    NSString *_firstHeaderText;
    NSArray *_latelyArray;
    NSMutableArray *_tmpArray;
}

@property(retain, nonatomic) NSMutableArray *tmpArray; // @synthesize tmpArray=_tmpArray;
@property(retain, nonatomic) NSArray *latelyArray; // @synthesize latelyArray=_latelyArray;
@property(copy, nonatomic) NSString *firstHeaderText; // @synthesize firstHeaderText=_firstHeaderText;
@property(retain, nonatomic) NSString *strText; // @synthesize strText=_strText;
@property(retain, nonatomic) NSArray *allCitys; // @synthesize allCitys=_allCitys;
- (id)sectionShortNames;
- (id)sections;
- (void).cxx_destruct;
- (void)reloadBanks;
- (void)CCB_groupbyCity;
- (id)banksInSection:(id)arg1;
- (id)init;

@end

