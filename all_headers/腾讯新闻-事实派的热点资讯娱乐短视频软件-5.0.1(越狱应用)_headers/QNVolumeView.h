//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "SeekerDelegate-Protocol.h"

@class NSString, QNVerticalSeekerView;

@interface QNVolumeView : UIImageView <SeekerDelegate>
{
    QNVerticalSeekerView *_volumeView;
    _Bool key;
    _Bool _seeking;
}

@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
- (void).cxx_destruct;
@property(nonatomic) float volume; // @dynamic volume;
- (_Bool)isThreshold:(float)arg1 curr:(float)arg2;
- (void)volumeChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)removeHardKeyVolumeListener;
- (_Bool)addHardKeyVolumeListener;
- (void)dealloc;
- (void)seeked:(double)arg1;
- (void)seeking:(double)arg1;
- (void)seek:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

