//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPKCommonCell.h"

@class MTTextField;

@interface SPKTitleInputCell : SPKCommonCell
{
    MTTextField *_textField;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) MTTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

