//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCTableViewBaseCell.h"

@class NSArray, WCCButton;

@interface MallAndPointTableViewCell : WCCTableViewBaseCell
{
    NSArray *_arrModel;
    WCCButton *_btnOne;
    WCCButton *_btnTwo;
    WCCButton *_btnThree;
    WCCButton *_btnFour;
}

@property(retain, nonatomic) WCCButton *btnFour; // @synthesize btnFour=_btnFour;
@property(retain, nonatomic) WCCButton *btnThree; // @synthesize btnThree=_btnThree;
@property(retain, nonatomic) WCCButton *btnTwo; // @synthesize btnTwo=_btnTwo;
@property(retain, nonatomic) WCCButton *btnOne; // @synthesize btnOne=_btnOne;
@property(retain, nonatomic) NSArray *arrModel; // @synthesize arrModel=_arrModel;
- (void).cxx_destruct;
- (void)JumpWithMallDataModel:(id)arg1;
- (void)onClickFour;
- (void)onClickThree;
- (void)onClickTwo;
- (void)onClickOne;
- (double)heightForMallCell;
- (void)initCell;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

