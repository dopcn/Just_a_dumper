//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseSquareCoverButtonContentView.h"

@class NMPlayCountView, NMPlaylist;

@interface NMMyPlaylistRecommendSubView : NMBaseSquareCoverButtonContentView
{
    NMPlayCountView *_playCountView;
    NMPlaylist *_playlist;
}

+ (struct CGSize)viewSize;
@property(retain, nonatomic) NMPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

@end

