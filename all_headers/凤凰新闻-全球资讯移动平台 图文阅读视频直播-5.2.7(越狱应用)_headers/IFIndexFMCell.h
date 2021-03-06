//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFIndexBaseCell.h"

@class IFImageView, IFIndexFMCellSingelView, IfengUILabel;

@interface IFIndexFMCell : IFIndexBaseCell
{
    IFImageView *_thumbnailImageView;
    IfengUILabel *_cardTitleLabel;
    IfengUILabel *_singleTitleLabel;
    IfengUILabel *_programNameLabel;
    IFIndexFMCellSingelView *_singleViewLeft;
    IFIndexFMCellSingelView *_singleViewMiddle;
    IFIndexFMCellSingelView *_singleViewRight;
}

@property(retain, nonatomic) IFIndexFMCellSingelView *singleViewRight; // @synthesize singleViewRight=_singleViewRight;
@property(retain, nonatomic) IFIndexFMCellSingelView *singleViewMiddle; // @synthesize singleViewMiddle=_singleViewMiddle;
@property(retain, nonatomic) IFIndexFMCellSingelView *singleViewLeft; // @synthesize singleViewLeft=_singleViewLeft;
@property(retain, nonatomic) IfengUILabel *programNameLabel; // @synthesize programNameLabel=_programNameLabel;
@property(retain, nonatomic) IfengUILabel *singleTitleLabel; // @synthesize singleTitleLabel=_singleTitleLabel;
@property(retain, nonatomic) IfengUILabel *cardTitleLabel; // @synthesize cardTitleLabel=_cardTitleLabel;
@property(retain, nonatomic) IFImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (void)showMore:(id)arg1;
- (void)clickSingleItem:(id)arg1;
- (id)subIndexListForIndex:(long long)arg1;
- (void)_updateSingleView:(id)arg1;
- (void)loadData:(id)arg1;
- (void)_createItems;
- (void)uiInit;

@end

