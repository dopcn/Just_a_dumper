//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSNumber, NSString, SSCLocationCoordinate2D;
@protocol ISSCAttachment, ISSPlatformShareContentEntity;

@protocol ISSContent <NSObject>
- (void)addKaKaoStoryUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 fileUrl:(NSString *)arg4 description:(NSString *)arg5 image:(id <ISSCAttachment>)arg6 appName:(NSString *)arg7 appVersion:(NSString *)arg8 appBundleId:(NSString *)arg9;
- (void)addKaKaoTalkUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 appName:(NSString *)arg5 appVersion:(NSString *)arg6 appBundleId:(NSString *)arg7 iosDownloadUrl:(NSString *)arg8 androidDownloadUrl:(NSString *)arg9 executeUrl:(NSString *)arg10;
- (void)addWhatsAppUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2 music:(id <ISSCAttachment>)arg3 video:(id <ISSCAttachment>)arg4;
- (void)addLineUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addMingDaoUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2 title:(NSString *)arg3 url:(NSString *)arg4;
- (void)addWeixinFavUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 thumbImage:(id <ISSCAttachment>)arg5 image:(id <ISSCAttachment>)arg6 musicFileUrl:(NSString *)arg7 extInfo:(NSString *)arg8 fileData:(NSData *)arg9 emoticonData:(NSData *)arg10;
- (void)addWeixinTimelineUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 thumbImage:(id <ISSCAttachment>)arg5 image:(id <ISSCAttachment>)arg6 musicFileUrl:(NSString *)arg7 extInfo:(NSString *)arg8 fileData:(NSData *)arg9 emoticonData:(NSData *)arg10;
- (void)addWeixinSessionUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 thumbImage:(id <ISSCAttachment>)arg5 image:(id <ISSCAttachment>)arg6 musicFileUrl:(NSString *)arg7 extInfo:(NSString *)arg8 fileData:(NSData *)arg9 emoticonData:(NSData *)arg10;
- (void)addYiXinTimelineUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 thumbImage:(id <ISSCAttachment>)arg5 image:(id <ISSCAttachment>)arg6 musicFileUrl:(NSString *)arg7 extInfo:(NSString *)arg8 fileData:(NSData *)arg9;
- (void)addYiXinSessionUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 thumbImage:(id <ISSCAttachment>)arg5 image:(id <ISSCAttachment>)arg6 musicFileUrl:(NSString *)arg7 extInfo:(NSString *)arg8 fileData:(NSData *)arg9;
- (void)addInstagramUnitWithTitle:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addVKontakteUnitWithMessage:(NSString *)arg1 attachments:(NSArray *)arg2 url:(NSString *)arg3 groupId:(NSString *)arg4 friendsOnly:(NSNumber *)arg5 locationCoordinate:(SSCLocationCoordinate2D *)arg6;
- (void)addDropboxUnitWithFile:(id <ISSCAttachment>)arg1;
- (void)addTumblrUnitWithText:(NSString *)arg1 title:(NSString *)arg2 image:(id <ISSCAttachment>)arg3 url:(NSString *)arg4 blogName:(NSString *)arg5;
- (void)addFlickrUnitWithPhoto:(id <ISSCAttachment>)arg1 title:(NSString *)arg2 description:(NSString *)arg3 tags:(NSString *)arg4 isPublic:(NSNumber *)arg5 isFriend:(NSNumber *)arg6 isFamily:(NSNumber *)arg7 safetyLevel:(NSNumber *)arg8 contentType:(NSNumber *)arg9 hidden:(NSNumber *)arg10;
- (void)addPinterestUnitWithImage:(id <ISSCAttachment>)arg1 url:(NSString *)arg2 description:(NSString *)arg3;
- (void)addGooglePlusUnitWithText:(NSString *)arg1 image:(id <ISSCAttachment>)arg2 url:(NSString *)arg3 deepLinkId:(NSString *)arg4 title:(NSString *)arg5 description:(NSString *)arg6 thumbnail:(NSString *)arg7;
- (void)addLinkedInUnitWithComment:(NSString *)arg1 title:(NSString *)arg2 description:(NSString *)arg3 url:(NSString *)arg4 image:(id <ISSCAttachment>)arg5 visibility:(NSString *)arg6;
- (void)addKaiXinUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addTwitterUnitWithContent:(NSString *)arg1 imageArray:(NSArray *)arg2 locationCoordinate:(SSCLocationCoordinate2D *)arg3;
- (void)addTwitterWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2 locationCoordinate:(SSCLocationCoordinate2D *)arg3;
- (void)addTwitterWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addFacebookWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addDouBanWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addAirPrintWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addCopyUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)add163WeiboUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addSohuWeiboUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addTencentWeiboUnitWithContent:(NSString *)arg1 imageArray:(NSArray *)arg2 locationCoordinate:(SSCLocationCoordinate2D *)arg3;
- (void)addTencentWeiboUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2 locationCoordinate:(SSCLocationCoordinate2D *)arg3;
- (void)addTencentWeiboUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addSinaWeiboUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2 locationCoordinate:(SSCLocationCoordinate2D *)arg3;
- (void)addSinaWeiboUnitWithContent:(NSString *)arg1 image:(id <ISSCAttachment>)arg2;
- (void)addEvernoteUnitWithContent:(NSString *)arg1 title:(NSString *)arg2 resources:(NSArray *)arg3 notebookGuid:(NSString *)arg4 tagsGuid:(NSArray *)arg5;
- (void)addEvernoteUnitWithContent:(NSString *)arg1 title:(NSString *)arg2 resources:(NSArray *)arg3;
- (void)addPocketUnitWithUrl:(NSString *)arg1 title:(NSString *)arg2 tags:(NSString *)arg3 tweetId:(NSString *)arg4;
- (void)addSohuKanUnitWithUrl:(NSString *)arg1;
- (void)addRenRenUnitWithName:(NSString *)arg1 description:(NSString *)arg2 url:(NSString *)arg3 message:(NSString *)arg4 image:(id <ISSCAttachment>)arg5 caption:(NSString *)arg6;
- (void)addMailUnitWithSubject:(NSString *)arg1 content:(NSString *)arg2 isHTML:(NSNumber *)arg3 attachments:(NSArray *)arg4 to:(NSArray *)arg5 cc:(NSArray *)arg6 bcc:(NSArray *)arg7;
- (void)addInstapaperContentWithUrl:(NSString *)arg1 title:(NSString *)arg2 description:(NSString *)arg3;
- (void)addYouDaoNoteUnitWithContent:(NSString *)arg1 title:(NSString *)arg2 author:(NSString *)arg3 source:(NSString *)arg4 attachments:(NSArray *)arg5;
- (void)addQQSpaceUnitWithTitle:(NSString *)arg1 url:(NSString *)arg2 site:(NSString *)arg3 fromUrl:(NSString *)arg4 comment:(NSString *)arg5 summary:(NSString *)arg6 image:(id <ISSCAttachment>)arg7 type:(NSNumber *)arg8 playUrl:(NSString *)arg9 nswb:(NSNumber *)arg10;
- (void)addSMSUnitWithContent:(NSString *)arg1;
- (void)addQQUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 image:(id <ISSCAttachment>)arg5;
- (void)addWeixinTimelineUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 image:(id <ISSCAttachment>)arg5 musicFileUrl:(NSString *)arg6 extInfo:(NSString *)arg7 fileData:(NSData *)arg8 emoticonData:(NSData *)arg9;
- (void)addWeixinSessionUnitWithType:(NSNumber *)arg1 content:(NSString *)arg2 title:(NSString *)arg3 url:(NSString *)arg4 image:(id <ISSCAttachment>)arg5 musicFileUrl:(NSString *)arg6 extInfo:(NSString *)arg7 fileData:(NSData *)arg8 emoticonData:(NSData *)arg9;
- (void)setShareContentEntity:(id <ISSPlatformShareContentEntity>)arg1 type:(int)arg2;
- (id <ISSPlatformShareContentEntity>)shareContentEntityWithType:(int)arg1;
- (void)setGroupId:(NSString *)arg1;
- (NSString *)groupId;
- (void)setLocationCoordinate:(SSCLocationCoordinate2D *)arg1;
- (SSCLocationCoordinate2D *)locationCoordinate;
- (void)setImageArray:(NSArray *)arg1;
- (NSArray *)imageArray;
- (void)setImage:(id <ISSCAttachment>)arg1;
- (id <ISSCAttachment>)image;
- (void)setDefaultContent:(NSString *)arg1;
- (NSString *)defaultContent;
- (void)setContent:(NSString *)arg1;
- (NSString *)content;
- (void)setMediaType:(int)arg1;
- (int)mediaType;
- (void)setDesc:(NSString *)arg1;
- (NSString *)desc;
- (void)setUrl:(NSString *)arg1;
- (NSString *)url;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;
- (void)removeMetadata:(NSString *)arg1;
- (void)setMetadata:(NSString *)arg1 value:(id)arg2;
- (id)getMetadata:(NSString *)arg1;
@end

