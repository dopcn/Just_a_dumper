//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;

@interface RPBTenderDetailModelCell : UIView
{
    long long _type;
    NSDictionary *_data;
}

+ (id)cellForData:(id)arg1 type:(long long)arg2;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)cellSelect:(id)arg1;
- (void)_updateUI;

@end

