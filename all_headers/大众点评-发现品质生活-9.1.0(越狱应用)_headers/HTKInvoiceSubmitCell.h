//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HTKInvoiceInfo, UIButton;

@interface HTKInvoiceSubmitCell : UITableViewCell
{
    HTKInvoiceInfo *_invoice;
    CDUnknownBlockType _submit;
    UIButton *_button;
}

+ (double)cellHeightWithInvoice:(id)arg1;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(copy, nonatomic) CDUnknownBlockType submit; // @synthesize submit=_submit;
@property(retain, nonatomic) HTKInvoiceInfo *invoice; // @synthesize invoice=_invoice;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didClickButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

