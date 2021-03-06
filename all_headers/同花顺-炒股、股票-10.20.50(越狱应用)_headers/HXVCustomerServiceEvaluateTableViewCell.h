//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXVTableViewCell.h"

@class HXVCustomerServiceEvaluteCellViewModel, NSMutableArray;
@protocol HXVCustomerServiceEvaluateTableViewCellDelegate;

@interface HXVCustomerServiceEvaluateTableViewCell : HXVTableViewCell
{
    id <HXVCustomerServiceEvaluateTableViewCellDelegate> _delegate;
    HXVCustomerServiceEvaluteCellViewModel *_viewModel;
    NSMutableArray *_buttonArray;
}

@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) HXVCustomerServiceEvaluteCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <HXVCustomerServiceEvaluateTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)itemButtonClicked:(id)arg1;
- (void)updateButtonsState;
- (id)createButtonWithModel:(id)arg1 andXPos:(double)arg2;
- (void)bindViewModel:(id)arg1;
- (void)hxv_initialize;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

