//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UILabel, UITextField;

@interface CTFlightCESMemberCertCell : CTCustomeGroupTableViewCell
{
    UILabel *_certTitleLabel;
    UITextField *_certTextfield;
}

+ (double)setupCell:(id)arg1 cert:(id)arg2;
+ (double)heightForCertCell;
+ (id)createCertCell:(id)arg1 certStr:(id)arg2 pickerViewDelegate:(id)arg3;
@property(nonatomic) __weak UITextField *certTextfield; // @synthesize certTextfield=_certTextfield;
@property(nonatomic) __weak UILabel *certTitleLabel; // @synthesize certTitleLabel=_certTitleLabel;
- (void).cxx_destruct;

@end

