//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol KKPlayerSubViewProtocol;

@protocol KKPlayerViewProtocol <NSObject>
- (void)removePlayerView:(UIView *)arg1;
- (void)addPlayerView:(UIView *)arg1 level:(unsigned long long)arg2;
- (void)removePlayerSubview:(id <KKPlayerSubViewProtocol>)arg1;
- (void)addPlayerSubview:(id <KKPlayerSubViewProtocol>)arg1;
@end

