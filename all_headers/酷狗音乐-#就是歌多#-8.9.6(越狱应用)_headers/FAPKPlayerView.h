//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAView.h"

#import "FAPKPlayerViewProtocol-Protocol.h"

@protocol FAPKPlayerViewDelegate;

@interface FAPKPlayerView : FAView <FAPKPlayerViewProtocol>
{
    id <FAPKPlayerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FAPKPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldTapPlayerView;
- (void)tapPlayerViewHandler;

@end

