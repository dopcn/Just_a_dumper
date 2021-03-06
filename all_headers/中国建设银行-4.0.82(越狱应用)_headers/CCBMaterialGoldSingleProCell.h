//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class CCBButton, CCBImageView, CCBLabel, CCBRoundButton, CCBTextField, CCBView, CCB_7_PhysicalGoldTradeItem, NSIndexPath, NSString;
@protocol CCBMaterialGoldSingleProDelegate;

@interface CCBMaterialGoldSingleProCell : UITableViewCell <UITextFieldDelegate>
{
    CCBButton *_selectBtn;
    CCBImageView *_materialLogo;
    CCBLabel *_productTitle;
    CCBLabel *_productContent;
    CCBLabel *_weight;
    CCBLabel *_productPrice;
    CCBLabel *_buyArea;
    CCBLabel *_sumMoney;
    CCBButton *_subtractBtn;
    CCBButton *_addBtn;
    CCBTextField *_buyNumber;
    CCBRoundButton *_deleteBtn;
    NSString *_AlSal_Ind;
    CCBView *_backdropView;
    id <CCBMaterialGoldSingleProDelegate> _delegate;
    NSIndexPath *_itemPath;
    CCB_7_PhysicalGoldTradeItem *_item;
}

+ (double)cellHeight:(_Bool)arg1;
@property(retain, nonatomic) CCB_7_PhysicalGoldTradeItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSIndexPath *itemPath; // @synthesize itemPath=_itemPath;
@property(retain, nonatomic) id <CCBMaterialGoldSingleProDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CCBView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) NSString *AlSal_Ind; // @synthesize AlSal_Ind=_AlSal_Ind;
@property(retain, nonatomic) CCBRoundButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) CCBTextField *buyNumber; // @synthesize buyNumber=_buyNumber;
@property(retain, nonatomic) CCBButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) CCBButton *subtractBtn; // @synthesize subtractBtn=_subtractBtn;
@property(retain, nonatomic) CCBLabel *sumMoney; // @synthesize sumMoney=_sumMoney;
@property(retain, nonatomic) CCBLabel *buyArea; // @synthesize buyArea=_buyArea;
@property(retain, nonatomic) CCBLabel *productPrice; // @synthesize productPrice=_productPrice;
@property(retain, nonatomic) CCBLabel *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) CCBLabel *productContent; // @synthesize productContent=_productContent;
@property(retain, nonatomic) CCBLabel *productTitle; // @synthesize productTitle=_productTitle;
@property(retain, nonatomic) CCBImageView *materialLogo; // @synthesize materialLogo=_materialLogo;
@property(retain, nonatomic) CCBButton *selectBtn; // @synthesize selectBtn=_selectBtn;
- (void).cxx_destruct;
- (id)moneyCodeShine:(id)arg1;
- (void)segmentAction:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (id)switchMoney:(id)arg1;
- (void)drawViewIsTakeAway:(_Bool)arg1 AlSal_Ind:(id)arg2 isFirst:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

