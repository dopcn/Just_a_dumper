//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTDestBaseCell.h"

@class CTDestHistoryCardButton, NSMutableArray, UIView;

@interface CTDestBrowsingHistoryCell : CTDestBaseCell
{
    CDUnknownBlockType _deleteBlock;
    UIView *_bottomView;
    CTDestHistoryCardButton *_overseasBt;
    CTDestHistoryCardButton *_domesticBt;
    UIView *_lineView;
    NSMutableArray *_historys;
}

+ (double)heightForCell:(long long)arg1 withModel:(id)arg2;
@property(retain, nonatomic) NSMutableArray *historys; // @synthesize historys=_historys;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) CTDestHistoryCardButton *domesticBt; // @synthesize domesticBt=_domesticBt;
@property(retain, nonatomic) CTDestHistoryCardButton *overseasBt; // @synthesize overseasBt=_overseasBt;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
- (void).cxx_destruct;
- (void)viewTapped:(id)arg1;
- (void)buttonDomestic;
- (void)buttonOverseas;
- (void)deleteAction;
- (void)refreshCell:(long long)arg1 withModel:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

