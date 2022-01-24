//
// Copyright 2021 New Vector Ltd
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

/**
 `MXRefreshTokenData` used to update `MXCredentials` that it's token data has updated. see `MXCredentialsUpdateTokensNotification`.
 */
@interface MXRefreshTokenData : NSObject

    /**
     The  user id.
     */
    @property (nonatomic, nullable) NSString *userId;
    
/**
     The homeserver URL.
     */
    @property (nonatomic, readonly) NSString *homeserver;


    /**
     The access token to create a MXRestClient
     */
    @property (nonatomic) NSString *accessToken;

    /**
     The lifetime in milliseconds of the access token. (optional)
     */
    @property (nonatomic) uint64_t expiresInMs;

    /**
     The refresh token, which can be used to obtain new access tokens. (optional)
    */
    @property (nonatomic) NSString *refreshToken;

- (instancetype)initWithUserId:(NSString*)userId
                    homeserver:(NSString*)homeserver
                   accessToken:(NSString*)accessToken
                  refreshToken:(NSString*)refreshToken
                    expiresInM:(uint64_t)expiresInMs;
@end
