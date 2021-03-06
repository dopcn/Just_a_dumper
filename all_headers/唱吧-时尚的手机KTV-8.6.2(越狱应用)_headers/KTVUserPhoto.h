//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface KTVUserPhoto : MTLModel <MTLJSONSerializing>
{
    NSString *_name;
    NSString *_URLString;
    NSString *_photoID;
    NSString *_userID;
    long long _likeNums;
    long long _newLikeNums;
    NSArray *_likeUsers;
}

+ (id)likeUsersJSONTransformer;
+ (void)getPhotoLikeUserList:(long long)arg1 photoid:(id)arg2 start:(long long)arg3 offset:(long long)arg4 callback:(CDUnknownBlockType)arg5;
+ (void)likeUserPhoto:(_Bool)arg1 userid:(long long)arg2 photoid:(id)arg3 ownerid:(long long)arg4 callback:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
+ (void)unlikeUserPhoto:(long long)arg1 photoid:(id)arg2 ownerid:(long long)arg3 callback:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
+ (void)likeUserPhoto:(long long)arg1 photoid:(id)arg2 ownerid:(long long)arg3 callback:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
+ (void)loadUserPhotoWithLike:(long long)arg1 success:(CDUnknownBlockType)arg2;
+ (void)loadUserPhoto:(long long)arg1 success:(CDUnknownBlockType)arg2;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *likeUsers; // @synthesize likeUsers=_likeUsers;
@property(nonatomic) long long newLikeNums; // @synthesize newLikeNums=_newLikeNums;
@property(nonatomic) long long likeNums; // @synthesize likeNums=_likeNums;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *photoID; // @synthesize photoID=_photoID;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isHeadPhotoForUser:(id)arg1;
- (id)largeImageUrl;
- (id)smallImageUrl;

@end

