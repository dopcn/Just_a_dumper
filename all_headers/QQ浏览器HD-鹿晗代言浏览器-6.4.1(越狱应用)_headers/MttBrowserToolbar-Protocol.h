//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MttBrowserToolbarAppearence, MttBrowserToolbarDataSource, MttBrowserToolbarDelegate;

@protocol MttBrowserToolbar <NSObject>
@property(nonatomic) __weak id <MttBrowserToolbarAppearence> appearence;
@property(nonatomic) __weak id <MttBrowserToolbarDataSource> toolbarDataSource;
@property(nonatomic) __weak id <MttBrowserToolbarDelegate> toolbarDelegate;
@property(nonatomic) long long browserToolbarType;
@property(nonatomic) long long style;
- (void)hideContentView:(NSString *)arg1;
- (void)switchToTheme:(long long)arg1;
- (void)setOffset:(double)arg1 animated:(_Bool)arg2;
- (void)reloadData;
@end

