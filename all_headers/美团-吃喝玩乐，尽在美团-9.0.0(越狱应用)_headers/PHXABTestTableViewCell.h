//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField, UIView;

@interface PHXABTestTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    CDUnknownBlockType _didEditStrategyCode;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    UITextField *_valueTextField;
    UIView *_parentView;
    long long _index;
}

+ (long long)heightWithDomain:(id)arg1;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UITextField *valueTextField; // @synthesize valueTextField=_valueTextField;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
@property(copy, nonatomic) CDUnknownBlockType didEditStrategyCode; // @synthesize didEditStrategyCode=_didEditStrategyCode;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateWithABTestDomain:(id)arg1 segmentedIndex:(long long)arg2 cellIndex:(long long)arg3;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

