//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MTPCreditOptionsView : UIView
{
    long long _selectedCredit;
    NSArray *_creditButtonArray;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(copy, nonatomic) NSArray *creditButtonArray; // @synthesize creditButtonArray=_creditButtonArray;
@property(nonatomic) long long selectedCredit; // @synthesize selectedCredit=_selectedCredit;
- (void).cxx_destruct;
- (void)updateConstraints;
- (double)creditOptionsViewHeight;
- (id)initWithCreditOptions:(id)arg1 defaultCredit:(long long)arg2 currentCredit:(long long)arg3;

@end

