//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMLivePlayerDetailViewModelBase.h"

@class NSArray, NSString, TMLivePlayerDetailColumnFooterViewModel, TMLivePlayerDetailColumnTitleViewModel;

@interface TMLivePlayerDetailHeaderColumnViewModel : TMLivePlayerDetailViewModelBase
{
    _Bool _isExpanded;
    _Bool _isShow;
    NSString *_name;
    NSString *_columnCount;
    NSArray *_installments;
    long long _currentInstallment;
    NSString *_columnUrl;
    NSString *_currentCid;
    TMLivePlayerDetailColumnTitleViewModel *_titleModel;
    TMLivePlayerDetailColumnFooterViewModel *_footerModel;
}

@property(retain, nonatomic) TMLivePlayerDetailColumnFooterViewModel *footerModel; // @synthesize footerModel=_footerModel;
@property(retain, nonatomic) TMLivePlayerDetailColumnTitleViewModel *titleModel; // @synthesize titleModel=_titleModel;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) NSString *currentCid; // @synthesize currentCid=_currentCid;
@property(retain, nonatomic) NSString *columnUrl; // @synthesize columnUrl=_columnUrl;
@property(nonatomic) long long currentInstallment; // @synthesize currentInstallment=_currentInstallment;
@property(copy, nonatomic) NSArray *installments; // @synthesize installments=_installments;
@property(retain, nonatomic) NSString *columnCount; // @synthesize columnCount=_columnCount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)reloadWithDictionary:(id)arg1;
- (void)processInstallments:(id)arg1;
- (void)processWithDict:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

