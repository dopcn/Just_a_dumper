//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCORInfoInputView.h"

@class DCRichLabel, DCTravelSecurityModel, NSDictionary, UIButton;

@interface DCORTravelSecurityView : DCORInfoInputView
{
    CDUnknownBlockType _selectButtonBlock;
    DCRichLabel *_describeLable;
    DCRichLabel *_detailLable;
    UIButton *_selectButton;
    DCTravelSecurityModel *_dataModel;
    NSDictionary *_dataDict;
}

@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(retain, nonatomic) DCTravelSecurityModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) DCRichLabel *detailLable; // @synthesize detailLable=_detailLable;
@property(retain, nonatomic) DCRichLabel *describeLable; // @synthesize describeLable=_describeLable;
@property(copy, nonatomic) CDUnknownBlockType selectButtonBlock; // @synthesize selectButtonBlock=_selectButtonBlock;
- (void).cxx_destruct;
- (void)reloadSelectStatus:(_Bool)arg1;
- (void)reloadData:(id)arg1;
- (void)reloadViewData:(id)arg1;
- (void)clickButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

