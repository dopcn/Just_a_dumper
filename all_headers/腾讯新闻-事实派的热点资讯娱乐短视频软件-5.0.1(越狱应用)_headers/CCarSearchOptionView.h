//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CCarSearchOptionButton;
@protocol CCarSearchOptionViewDelegate;

@interface CCarSearchOptionView : UIView
{
    CCarSearchOptionButton *brandButton;
    CCarSearchOptionButton *priceButton;
    CCarSearchOptionButton *structureButton;
    CCarSearchOptionButton *coutryButton;
    id <CCarSearchOptionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CCarSearchOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetSearchOptionView;
- (id)getSearchOptionBtnWithType:(long long)arg1;
- (void)cancelSelected;
- (void)onClick:(id)arg1;
- (void)validateThemeChanged;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTopOffset:(double)arg2;

@end

