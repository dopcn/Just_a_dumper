//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DOPDropDownMenu, DOPIndexPath, NSIndexPath;

@protocol DOPDropDownMenuDelegate <NSObject>

@optional
- (void)menu:(DOPDropDownMenu *)arg1 didSelectColumn:(long long)arg2;
- (_Bool)menu:(DOPDropDownMenu *)arg1 canSelectColumn:(long long)arg2;
- (NSIndexPath *)menu:(DOPDropDownMenu *)arg1 willSelectRowAtIndexPath:(DOPIndexPath *)arg2;
- (void)menu:(DOPDropDownMenu *)arg1 didSelectRowAtIndexPath:(DOPIndexPath *)arg2;
@end

