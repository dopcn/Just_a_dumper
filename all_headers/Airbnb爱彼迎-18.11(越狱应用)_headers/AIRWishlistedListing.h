//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRListing, AIRListingCardUrgencyCommitmentMessage, AIRPricingQuote, NSArray, NSString;

@interface AIRWishlistedListing : AIRModel
{
    NSString *_wishlistedListingID;
    AIRListing *_listing;
    AIRPricingQuote *_pricingQuote;
    NSString *_comment;
    NSArray *_upVotes;
    NSArray *_downVotes;
    AIRListingCardUrgencyCommitmentMessage *_urgencyMessage;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
+ (id)wishlistedListingsFromResponse:(id)arg1 error:(id *)arg2;
+ (id)wishlistedListingFromResponse:(id)arg1 error:(id *)arg2;
+ (id)makeCollaborationParams;
+ (id)removeListingWithID:(id)arg1 fromWishlistWithID:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
+ (id)addListingWithID:(id)arg1 toWishlistWithID:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
+ (id)getWishlistedListingsForWishlistWithID:(id)arg1 range:(struct _NSRange)arg2 format:(id)arg3 session:(id)arg4 useCache:(_Bool)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailure:(CDUnknownBlockType)arg7;
@property(readonly, copy, nonatomic) AIRListingCardUrgencyCommitmentMessage *urgencyMessage; // @synthesize urgencyMessage=_urgencyMessage;
@property(readonly, copy, nonatomic) NSArray *downVotes; // @synthesize downVotes=_downVotes;
@property(readonly, copy, nonatomic) NSArray *upVotes; // @synthesize upVotes=_upVotes;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, copy, nonatomic) AIRPricingQuote *pricingQuote; // @synthesize pricingQuote=_pricingQuote;
@property(readonly, copy, nonatomic) AIRListing *listing; // @synthesize listing=_listing;
@property(readonly, copy, nonatomic) NSString *wishlistedListingID; // @synthesize wishlistedListingID=_wishlistedListingID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)changeVote:(long long)arg1 userID:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
- (id)newWishlistedListingWithVote:(long long)arg1 userID:(id)arg2;

@end

