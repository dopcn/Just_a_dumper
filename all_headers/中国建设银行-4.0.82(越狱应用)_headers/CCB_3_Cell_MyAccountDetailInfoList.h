//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBTableViewCell.h"

@class CCBLabel, CCB_3_SubCardModel, NSMutableArray;

@interface CCB_3_Cell_MyAccountDetailInfoList : CCBTableViewCell
{
    CCB_3_SubCardModel *_subCardModel;
    CCBLabel *_moneyTypeLabel;
    CCBLabel *_moneyLabel;
    CCBLabel *_accDescLabel;
    NSMutableArray *_manageViews;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) NSMutableArray *manageViews; // @synthesize manageViews=_manageViews;
@property(nonatomic) __weak CCBLabel *accDescLabel; // @synthesize accDescLabel=_accDescLabel;
@property(nonatomic) __weak CCBLabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(nonatomic) __weak CCBLabel *moneyTypeLabel; // @synthesize moneyTypeLabel=_moneyTypeLabel;
@property(retain, nonatomic) CCB_3_SubCardModel *subCardModel; // @synthesize subCardModel=_subCardModel;
- (void).cxx_destruct;
- (id)getColorByCurrType:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

