//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTKPersonalInfoBasicCell.h"

@class HTKAddressBook, UIButton;

@interface TVLTravelerNameCell : HTKPersonalInfoBasicCell
{
    UIButton *_extendButton;
    HTKAddressBook *_addressBookWraper;
}

@property(retain, nonatomic) HTKAddressBook *addressBookWraper; // @synthesize addressBookWraper=_addressBookWraper;
@property(retain, nonatomic) UIButton *extendButton; // @synthesize extendButton=_extendButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

