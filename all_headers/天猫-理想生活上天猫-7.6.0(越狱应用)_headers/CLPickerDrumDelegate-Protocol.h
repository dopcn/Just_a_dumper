//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLPickerDrum, NSString, UIView;

@protocol CLPickerDrumDelegate <NSObject>

@optional
- (void)pickerDrum:(CLPickerDrum *)arg1 didSelectRow:(long long)arg2;
- (NSString *)pickerDrum:(CLPickerDrum *)arg1 titleForRow:(long long)arg2;
- (UIView *)pickerDrum:(CLPickerDrum *)arg1 viewForRow:(long long)arg2 reusingView:(UIView *)arg3;
- (double)rowHeightInPickerDrum:(CLPickerDrum *)arg1;
@end

