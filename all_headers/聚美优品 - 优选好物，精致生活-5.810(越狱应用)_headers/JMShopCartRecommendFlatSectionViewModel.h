//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JMShopCartSectionViewModelProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface JMShopCartRecommendFlatSectionViewModel : NSObject <JMShopCartSectionViewModelProtocol>
{
    unsigned long long _sectionType;
    unsigned long long _orignalDataIndex;
    NSMutableArray *_cellViewModels;
    NSString *_title;
    NSString *_tag;
}

@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
@property(nonatomic) unsigned long long orignalDataIndex; // @synthesize orignalDataIndex=_orignalDataIndex;
@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
- (void).cxx_destruct;
- (id)reuseIdentifierForHeader;
- (Class)headerViewClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

