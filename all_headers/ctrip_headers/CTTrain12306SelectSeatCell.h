//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

#import "CTTrain12306SleeperSelectItemViewDelegate-Protocol.h"
#import "CTTrainSeatSelectItemViewDelegate-Protocol.h"

@class CTTrainSeatButton, CTTrainSeatSelectItemView, CTTrainTipView, NSArray, NSString, UILabel;
@protocol CTTrain12306SelectSeatCellDelegate;

@interface CTTrain12306SelectSeatCell : CTCustomeGroupTableViewCell <CTTrainSeatSelectItemViewDelegate, CTTrain12306SleeperSelectItemViewDelegate>
{
    _Bool _isOpend;
    id <CTTrain12306SelectSeatCellDelegate> _delegate;
    CTTrainTipView *_tip12306View;
    long long _seatType;
    long long _selectedNumber;
    UILabel *_selectRateLabel;
    long long _seatNumber;
    NSArray *_seatArray;
    CTTrainSeatButton *_lastSelectedButton;
    CTTrainSeatSelectItemView *_lastItemView;
}

+ (double)heightOfCellTipString:(id)arg1 seatItems:(id)arg2 seatNumber:(long long)arg3 seatName:(id)arg4 isOpened:(_Bool)arg5;
@property(retain, nonatomic) CTTrainSeatSelectItemView *lastItemView; // @synthesize lastItemView=_lastItemView;
@property(retain, nonatomic) CTTrainSeatButton *lastSelectedButton; // @synthesize lastSelectedButton=_lastSelectedButton;
@property(retain, nonatomic) NSArray *seatArray; // @synthesize seatArray=_seatArray;
@property(nonatomic) long long seatNumber; // @synthesize seatNumber=_seatNumber;
@property(retain, nonatomic) UILabel *selectRateLabel; // @synthesize selectRateLabel=_selectRateLabel;
@property(nonatomic) long long selectedNumber; // @synthesize selectedNumber=_selectedNumber;
@property(nonatomic) long long seatType; // @synthesize seatType=_seatType;
@property(retain, nonatomic) CTTrainTipView *tip12306View; // @synthesize tip12306View=_tip12306View;
@property(nonatomic) _Bool isOpend; // @synthesize isOpend=_isOpend;
@property(nonatomic) __weak id <CTTrain12306SelectSeatCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sleeperSelectItemView:(id)arg1 didChangedSeatNumber:(long long)arg2;
- (_Bool)canReduceSleeperSelectItemView:(id)arg1;
- (_Bool)canAddSleeperSelectItemView:(id)arg1;
- (void)freshCellForSelectItemView:(id)arg1;
- (void)selectItemView:(id)arg1 selectedSeat:(id)arg2;
- (void)selectItemView:(id)arg1 cancelSelectedSeat:(id)arg2;
- (_Bool)selectItemViewCanContinueSelected:(id)arg1;
- (long long)allSelectedSeat;
- (void)openAction:(id)arg1;
- (void)updateRateLabel;
- (void)setupCellTipString:(id)arg1 seatItems:(id)arg2 seatNumber:(long long)arg3 seatName:(id)arg4 isOpened:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

