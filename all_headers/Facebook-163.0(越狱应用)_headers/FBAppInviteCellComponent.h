//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBAppInviteAppInfoComponent, FBAppInviteCellHeaderComponent, FBAppInvitePromotionDetailComponent, FBMemApplicationRequest, FBUserSession;

@interface FBAppInviteCellComponent : CKCompositeComponent
{
    FBMemApplicationRequest *_visibleInvite;
    struct FBAppInviteCellComponentActions _actions;
    FBAppInviteCellHeaderComponent *_cellHeaderComponent;
    FBUserSession *_nuxCoordinatorSession;
    FBAppInviteAppInfoComponent *_appInfoComponent;
    FBAppInvitePromotionDetailComponent *_promotionDetailComponent;
}

+ (id)socialContextAttributedStringForApplication:(id)arg1 fontFoundry:(id)arg2;
+ (id)newWithInvites:(id)arg1 visibleIndex:(unsigned long long)arg2 application:(id)arg3 isApplicationInstalled:(_Bool)arg4 showChevronNux:(_Bool)arg5 session:(id)arg6 actions:(const struct FBAppInviteCellComponentActions *)arg7 fontFoundry:(id)arg8;
+ (Class)controllerClass;
@property(readonly, nonatomic) FBAppInvitePromotionDetailComponent *promotionDetailComponent; // @synthesize promotionDetailComponent=_promotionDetailComponent;
@property(readonly, nonatomic) FBAppInviteAppInfoComponent *appInfoComponent; // @synthesize appInfoComponent=_appInfoComponent;
@property(readonly, nonatomic) FBAppInviteCellHeaderComponent *cellHeaderComponent; // @synthesize cellHeaderComponent=_cellHeaderComponent;
@property(readonly, nonatomic) FBUserSession *nuxCoordinatorSession; // @synthesize nuxCoordinatorSession=_nuxCoordinatorSession;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)inviteBecameVisible:(id)arg1 invite:(id)arg2;
- (void)installButtonDidTap:(id)arg1;

@end

