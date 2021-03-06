//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBViewController.h"

@class MTBButton, MTCTagView, NSArray;

@interface MNFBQP_TagViewVC : MNBViewController
{
    MTCTagView *_tagViewNormal1;
    MTCTagView *_tagViewNormal2;
    MTBButton *_btnAdd;
    MTBButton *_btnRemove;
    NSArray *_arrayDataSources;
    long long _intDataCount;
}

@property(nonatomic) long long intDataCount; // @synthesize intDataCount=_intDataCount;
@property(copy, nonatomic) NSArray *arrayDataSources; // @synthesize arrayDataSources=_arrayDataSources;
@property(retain, nonatomic) MTBButton *btnRemove; // @synthesize btnRemove=_btnRemove;
@property(retain, nonatomic) MTBButton *btnAdd; // @synthesize btnAdd=_btnAdd;
@property(retain, nonatomic) MTCTagView *tagViewNormal2; // @synthesize tagViewNormal2=_tagViewNormal2;
@property(retain, nonatomic) MTCTagView *tagViewNormal1; // @synthesize tagViewNormal1=_tagViewNormal1;
- (void).cxx_destruct;
- (id)imageWithColor:(id)arg1;
- (void)onRemoveTagView:(id)arg1;
- (void)onAddTagView:(id)arg1;
- (void)btnClickBack:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)createNavBarView;
- (void)mt_createViews;
- (void)mt_initFields;

@end

