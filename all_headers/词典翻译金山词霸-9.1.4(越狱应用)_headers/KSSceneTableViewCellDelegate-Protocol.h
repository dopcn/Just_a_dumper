//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSSceneTableViewCell;

@protocol KSSceneTableViewCellDelegate <NSObject>
- (void)sceneTableViewCell:(KSSceneTableViewCell *)arg1 didTapHeaderImageView:(id)arg2;
- (void)sceneTableViewCell:(KSSceneTableViewCell *)arg1 didClickCopyMenuItem:(id)arg2;
- (void)sceneTableViewCell:(KSSceneTableViewCell *)arg1 didClickPlayVoiceMenuItem:(id)arg2;
- (void)sceneTableViewCell:(KSSceneTableViewCell *)arg1 didClickTranslateMenuItem:(id)arg2;
@end

